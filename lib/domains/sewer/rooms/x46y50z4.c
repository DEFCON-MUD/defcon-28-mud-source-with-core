inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 50, 4 }));
  set_short( "Passage - x46y50z4" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y50z4.c",
  "east" : DIR+"/rooms/x47y50z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
