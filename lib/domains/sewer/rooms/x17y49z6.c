inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 49, 6 }));
  set_short( "Hallway - x17y49z6" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y50z6.c",
  "south" : DIR+"/rooms/x17y48z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
