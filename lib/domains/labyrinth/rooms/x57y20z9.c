inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 9 }));
  set_short( "Corridor - x57y20z9" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y20z9.c",
  "east" : DIR+"/rooms/x58y20z9.c",
  "south" : DIR+"/rooms/x57y19z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
