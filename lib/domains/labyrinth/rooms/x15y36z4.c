inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 4 }));
  set_short( "Corridor - x15y36z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z4.c",
  "north" : DIR+"/rooms/x15y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
