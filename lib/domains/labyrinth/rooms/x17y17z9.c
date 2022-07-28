inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 17, 9 }));
  set_short( "Corridor - x17y17z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y18z9.c",
  "south" : DIR+"/rooms/x17y16z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
