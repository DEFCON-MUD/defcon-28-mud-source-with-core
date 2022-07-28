inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 8 }));
  set_short( "Hallway - x57y12z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y12z8.c",
  "north" : DIR+"/rooms/x57y13z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
