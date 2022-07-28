inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 56, 7 }));
  set_short( "Corridor - x38y56z7" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y56z7.c",
  "east" : DIR+"/rooms/x39y56z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
