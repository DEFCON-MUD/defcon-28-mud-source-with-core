inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 27, 4 }));
  set_short( "Passage - x15y27z4" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y28z4.c",
  "south" : DIR+"/rooms/x15y26z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
