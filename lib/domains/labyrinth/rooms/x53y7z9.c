inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 7, 9 }));
  set_short( "Corridor - x53y7z9" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y8z9.c",
  "south" : DIR+"/rooms/x53y6z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
