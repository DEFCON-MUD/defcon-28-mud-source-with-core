inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 15, 6 }));
  set_short( "Passage - x49y15z6" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y16z6.c",
  "south" : DIR+"/rooms/x49y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
