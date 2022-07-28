inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 29, 7 }));
  set_short( "Passage - x15y29z7" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y30z7.c",
  "south" : DIR+"/rooms/x15y28z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
