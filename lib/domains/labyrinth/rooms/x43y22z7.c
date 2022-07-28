inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 7 }));
  set_short( "Corridor - x43y22z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y22z7.c",
  "south" : DIR+"/rooms/x43y21z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
