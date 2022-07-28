inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 2 }));
  set_short( "Passage - x19y26z2" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y27z2.c",
  "south" : DIR+"/rooms/x19y25z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
