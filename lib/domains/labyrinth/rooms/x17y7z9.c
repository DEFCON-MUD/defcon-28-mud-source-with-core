inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 7, 9 }));
  set_short( "Corridor - x17y7z9" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y8z9.c",
  "south" : DIR+"/rooms/x17y6z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
