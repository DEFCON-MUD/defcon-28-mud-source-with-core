inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 6 }));
  set_short( "Corridor - x18y2z6" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z6.c",
  "east" : DIR+"/rooms/x19y2z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
