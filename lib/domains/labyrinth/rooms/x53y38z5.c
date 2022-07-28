inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 38, 5 }));
  set_short( "Hallway - x53y38z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y38z5.c",
  "south" : DIR+"/rooms/x53y37z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
