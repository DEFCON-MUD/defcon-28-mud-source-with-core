inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 24, 2 }));
  set_short( "Passage - x24y24z2" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y24z2.c",
  "east" : DIR+"/rooms/x25y24z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
