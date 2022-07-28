inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 24, 9 }));
  set_short( "Corridor - x15y24z9" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y24z9.c",
  "south" : DIR+"/rooms/x15y23z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
