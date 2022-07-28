inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 61, 6 }));
  set_short( "Passage - x9y61z6" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y62z6.c",
  "south" : DIR+"/rooms/x9y60z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
