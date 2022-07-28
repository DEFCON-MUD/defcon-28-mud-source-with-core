inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 7 }));
  set_short( "Hallway - x7y34z7" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y34z7.c",
  "south" : DIR+"/rooms/x7y33z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
