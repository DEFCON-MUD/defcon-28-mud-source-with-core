inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 9 }));
  set_short( "Passage - x23y59z9" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z9.c",
  "south" : DIR+"/rooms/x23y58z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
