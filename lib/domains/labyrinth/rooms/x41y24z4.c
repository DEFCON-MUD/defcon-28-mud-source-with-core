inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 4 }));
  set_short( "Hallway - x41y24z4" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y24z4.c",
  "north" : DIR+"/rooms/x41y25z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
