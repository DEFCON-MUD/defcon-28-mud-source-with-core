inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 43, 9 }));
  set_short( "Hallway - x13y43z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y44z9.c",
  "south" : DIR+"/rooms/x13y42z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
