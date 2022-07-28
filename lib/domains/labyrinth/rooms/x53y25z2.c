inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 2 }));
  set_short( "Passage - x53y25z2" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z2.c",
  "south" : DIR+"/rooms/x53y24z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
