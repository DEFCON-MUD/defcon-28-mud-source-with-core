inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 50, 8 }));
  set_short( "Corridor - x57y50z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y50z8.c",
  "east" : DIR+"/rooms/x58y50z8.c",
  "south" : DIR+"/rooms/x57y49z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
