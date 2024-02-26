inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 33, 1 }));
  set_short( "Passage - x47y33z1" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y34z1.c",
  "south" : DIR+"/rooms/x47y32z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
