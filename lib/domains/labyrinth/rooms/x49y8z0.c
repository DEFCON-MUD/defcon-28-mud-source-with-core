inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 8, 0 }));
  set_short( "Passage - x49y8z0" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y8z0.c",
  "south" : DIR+"/rooms/x49y7z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
