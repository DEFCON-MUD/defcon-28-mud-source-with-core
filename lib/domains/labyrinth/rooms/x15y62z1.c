inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 1 }));
  set_short( "Corridor - x15y62z1" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z1.c",
  "east" : DIR+"/rooms/x16y62z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
