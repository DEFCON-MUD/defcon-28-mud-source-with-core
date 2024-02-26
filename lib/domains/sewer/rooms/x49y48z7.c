inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 7 }));
  set_short( "Passage - x49y48z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y48z7.c",
  "east" : DIR+"/rooms/x50y48z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
