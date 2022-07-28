inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 7 }));
  set_short( "Corridor - x23y22z7" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z7.c",
  "south" : DIR+"/rooms/x23y21z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
