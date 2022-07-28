inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 8 }));
  set_short( "Hallway - x35y34z8" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z8.c",
  "north" : DIR+"/rooms/x35y35z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
