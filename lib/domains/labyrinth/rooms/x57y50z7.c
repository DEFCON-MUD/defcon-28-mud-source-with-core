inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 7 }));
  set_short( "Corridor - x57y50z7" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y50z7.c",
  "east" : DIR+"/rooms/x58y50z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
