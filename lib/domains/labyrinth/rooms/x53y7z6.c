inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 7, 6 }));
  set_short( "Corridor - x53y7z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y8z6.c",
  "south" : DIR+"/rooms/x53y6z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
