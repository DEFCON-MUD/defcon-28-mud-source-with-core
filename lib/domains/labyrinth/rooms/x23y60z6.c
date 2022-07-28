inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 6 }));
  set_short( "Corridor - x23y60z6" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y60z6.c",
  "north" : DIR+"/rooms/x23y61z6.c",
  "south" : DIR+"/rooms/x23y59z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
