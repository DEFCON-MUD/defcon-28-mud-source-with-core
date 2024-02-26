inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 0 }));
  set_short( "Corridor - x49y14z0" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y14z0.c",
  "east" : DIR+"/rooms/x50y14z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
