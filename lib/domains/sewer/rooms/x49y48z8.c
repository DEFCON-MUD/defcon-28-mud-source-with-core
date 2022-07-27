inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 8 }));
  set_short( "Passage - x49y48z8" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y49z8.c",
  "south" : DIR+"/rooms/x49y47z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
