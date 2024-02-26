inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 6 }));
  set_short( "Hallway - x46y46z6" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z6.c",
  "east" : DIR+"/rooms/x47y46z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
