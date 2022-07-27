inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 3, 7 }));
  set_short( "Hallway - x53y3z7" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y4z7.c",
  "south" : DIR+"/rooms/x53y2z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
