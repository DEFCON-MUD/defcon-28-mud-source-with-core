inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 53, 9 }));
  set_short( "Passage - x53y53z9" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y54z9.c",
  "south" : DIR+"/rooms/x53y52z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
