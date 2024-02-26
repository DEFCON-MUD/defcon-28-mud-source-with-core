inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 25, 1 }));
  set_short( "Corridor - x47y25z1" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y26z1.c",
  "south" : DIR+"/rooms/x47y24z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
