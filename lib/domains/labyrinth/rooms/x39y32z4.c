inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 4 }));
  set_short( "Corridor - x39y32z4" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y33z4.c",
  "south" : DIR+"/rooms/x39y31z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
