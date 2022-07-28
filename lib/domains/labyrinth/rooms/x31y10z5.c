inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 5 }));
  set_short( "Corridor - x31y10z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z5.c",
  "south" : DIR+"/rooms/x31y9z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
