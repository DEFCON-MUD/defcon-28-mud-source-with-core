inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 36, 3 }));
  set_short( "Corridor - x52y36z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y36z3.c",
  "east" : DIR+"/rooms/x53y36z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
