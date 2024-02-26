inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 45, 7 }));
  set_short( "Corridor - x23y45z7" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y46z7.c",
  "south" : DIR+"/rooms/x23y44z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
