inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 6 }));
  set_short( "Corridor - x53y6z6" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y7z6.c",
  "south" : DIR+"/rooms/x53y5z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
