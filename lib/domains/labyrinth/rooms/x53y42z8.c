inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 8 }));
  set_short( "Passage - x53y42z8" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z8.c",
  "south" : DIR+"/rooms/x53y41z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
