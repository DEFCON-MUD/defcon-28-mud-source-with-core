inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 0 }));
  set_short( "Corridor - x17y44z0" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z0.c",
  "east" : DIR+"/rooms/x18y44z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
