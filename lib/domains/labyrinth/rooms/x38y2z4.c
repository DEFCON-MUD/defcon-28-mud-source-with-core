inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 2, 4 }));
  set_short( "Hallway - x38y2z4" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y2z4.c",
  "east" : DIR+"/rooms/x39y2z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
