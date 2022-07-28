inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 7 }));
  set_short( "Corridor - x47y44z7" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y44z7.c",
  "north" : DIR+"/rooms/x47y45z7.c",
  "south" : DIR+"/rooms/x47y43z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
