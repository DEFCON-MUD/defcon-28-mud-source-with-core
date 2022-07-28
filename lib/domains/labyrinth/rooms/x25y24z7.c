inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 7 }));
  set_short( "Passage - x25y24z7" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y24z7.c",
  "north" : DIR+"/rooms/x25y25z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
