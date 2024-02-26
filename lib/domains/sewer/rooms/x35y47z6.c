inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 47, 6 }));
  set_short( "Passage - x35y47z6" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y48z6.c",
  "south" : DIR+"/rooms/x35y46z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
