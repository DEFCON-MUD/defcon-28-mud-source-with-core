inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 9 }));
  set_short( "Hallway - x7y16z9" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y16z9.c",
  "south" : DIR+"/rooms/x7y15z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
