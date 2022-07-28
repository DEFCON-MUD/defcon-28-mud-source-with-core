inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 4 }));
  set_short( "Corridor - x17y32z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z4.c",
  "north" : DIR+"/rooms/x17y33z4.c",
  "south" : DIR+"/rooms/x17y31z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
