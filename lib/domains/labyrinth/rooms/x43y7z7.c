inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 7 }));
  set_short( "Hallway - x43y7z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z7.c",
  "south" : DIR+"/rooms/x43y6z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
