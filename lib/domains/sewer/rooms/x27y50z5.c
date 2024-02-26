inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 5 }));
  set_short( "Corridor - x27y50z5" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z5.c",
  "north" : DIR+"/rooms/x27y51z5.c",
  "south" : DIR+"/rooms/x27y49z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
